//
//  XMLParser.h
//  AppliAgencesNetty
//
//  Created by Christophe Bergé on 01/12/10.
//  Copyright 2010 __MyCompanyName__. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "Annonce.h"
#import "AppliAgencesNettyAppDelegate.h"

@class AppliAgencesNettyAppDelegate, Annonce;

@interface XMLParser : NSObject {
	NSMutableString *currentElementValue;
	Annonce *uneAnnonce;
	AppliAgencesNettyAppDelegate *appDelegate;
}

- (XMLParser *) initXMLParser;

@end
