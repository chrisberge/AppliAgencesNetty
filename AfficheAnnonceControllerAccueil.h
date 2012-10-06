//
//  AfficheAnnonceControllerAccueil.h
//  AppliAgencesNetty
//
//  Created by Christophe Bergé on 13/06/12.
//  Copyright (c) 2012 __MyCompanyName__. All rights reserved.
//
//  CLASSE UTILISEE POUR ACCUEIL

#import <UIKit/UIKit.h>
#import "ArrayWithIndex.h"
#import "Annonce.h"
#import "DiapoController3.h"
#import "AFOpenFlowViewDiapo.h"
#import "ProgressViewContoller.h"
#import "AppliAgencesNettyAppDelegate.h"

@class AppliAgencesNettyAppDelegate;

@interface AfficheAnnonceControllerAccueil : UIViewController <DiapoController3Delegate>{
    Annonce *lAnnonce;
	NSMutableArray *imagesArray;
	ArrayWithIndex *arrayWithIndex;
    AFOpenFlowViewDiapo *myOpenFlowView;
    UIScrollView *scrollView;
    ProgressViewContoller *pvc;
    AppliAgencesNettyAppDelegate *appDelegate;
}

@end
