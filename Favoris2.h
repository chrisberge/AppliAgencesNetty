//
//  Favoris2.h
//  AppliAgencesNetty
//
//  Created by Christophe Bergé on 05/06/12.
//  Copyright (c) 2012 __MyCompanyName__. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "ASIHTTPRequest.h"
#import "ASINetworkQueue.h"
#import "AfficheListeAnnoncesController3.h"
#import "Annonce.h"
#import "AfficheAnnonceController4.h"
#import "ProgressViewContoller.h"
#import "AppliAgencesNettyAppDelegate.h"

@class RootViewController;
@class ASINetworkQueue;
@class XMLParser;
@class AppliAgencesNettyAppDelegate;

@interface Favoris2 : UIViewController <UITableViewDelegate, UITableViewDataSource>{
    UITableView *tableView1;
    NSMutableArray *recherchesSauvees;
    NSMutableArray *biensSauves;
    
    UIButton *boutonRangee1;
    UIButton *boutonRangee2;
    UIButton *boutonRangee3;
    
    BOOL noRecherche;
    UILabel *labelType1;
    UILabel *labelVille1;
    UILabel *labelPrix1;
    UILabel *labelSurface1;
    
    UILabel *labelType2;
    UILabel *labelVille2;
    UILabel *labelPrix2;
    UILabel *labelSurface2;
    
    UILabel *labelType3;
    UILabel *labelVille3;
    UILabel *labelPrix3;
    UILabel *labelSurface3;
    
    RootViewController *rechercheMulti;
    NSString *whichView;
    NSMutableArray *tableauAnnonces1;
    
    BOOL isConnectionErrorPrinted;
    ASINetworkQueue *networkQueue;
    NSMutableDictionary *criteres2;
    
    ProgressViewContoller *pvc;
    
    Annonce *annonceSelected;
}

@property (nonatomic, assign) NSString *whichView;
@property (nonatomic, retain) RootViewController *rechercheMulti;
@property (nonatomic, copy) NSMutableArray *tableauAnnonces1;
//@property (nonatomic, copy) Annonce *annonceSelected;

- (void)getBiens;

@end
