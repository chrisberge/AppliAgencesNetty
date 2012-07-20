//
//  AppliAgencesNettyAppDelegate.h
//  AppliAgencesNetty
//
//  Created by Christophe Bergé on 23/07/10.
//  Copyright __MyCompanyName__ 2010. All rights reserved.
//

#import <UIKit/UIKit.h>
#import <CoreData/CoreData.h>
#import "Utility.h"
#import "Accueil.h"
#import "ContactViewController.h"
#import "Favoris2.h"
#import "AgenceViewController.h"
#import "Annonce.h"

@class Accueil;
@class AgenceViewController;
@class Favoris2;

@interface AppliAgencesNettyAppDelegate : NSObject <UIApplicationDelegate, UITabBarControllerDelegate> {
    UIWindow *window;
	UITabBarController *myTabBarController;
	Accueil *accueilView;
	Favoris2 *favorisView;
	AgenceViewController *agenceView;
	ContactViewController *contactView;
    BOOL isAccueil;
    UIImageView *imagePresentation;
    NSString *whichView;
    Annonce *annonceAccueil;
    Annonce *annonceMulti;
    Annonce *annonceFavoris;
    Annonce *annonceBiensFavoris;
    Annonce *annonceModifierFavoris;
    NSString *url_serveur;
    NSString *partenaire;
    NSString *id_agence;
	
@private
    NSManagedObjectContext *managedObjectContext_;
    NSManagedObjectModel *managedObjectModel_;
    NSPersistentStoreCoordinator *persistentStoreCoordinator_;
	
}

@property (nonatomic, retain) IBOutlet UIWindow *window;
@property (nonatomic, retain) UITabBarController *myTabBarController;
@property (nonatomic, retain) Accueil *accueilView;
@property (nonatomic, retain) Favoris2 *favorisView;
@property (nonatomic, retain) AgenceViewController *agenceView;
@property (nonatomic, retain) ContactViewController *contactView;
@property (nonatomic, assign) BOOL isAccueil;
@property (nonatomic, assign) NSString *whichView;
@property (nonatomic, retain) Annonce *annonceAccueil;
@property (nonatomic, retain) Annonce *annonceMulti;
@property (nonatomic, retain) Annonce *annonceFavoris;
@property (nonatomic, retain) Annonce *annonceBiensFavoris;
@property (nonatomic, retain) Annonce *annonceModifierFavoris;
@property (nonatomic, assign) NSString *url_serveur;
@property (nonatomic, assign) NSString *partenaire;
@property (nonatomic, assign) NSString *id_agence;

@property (nonatomic, retain, readonly) NSManagedObjectContext *managedObjectContext;
@property (nonatomic, retain, readonly) NSManagedObjectModel *managedObjectModel;
@property (nonatomic, retain, readonly) NSPersistentStoreCoordinator *persistentStoreCoordinator;

- (NSString *)applicationDocumentsDirectory;

@end

