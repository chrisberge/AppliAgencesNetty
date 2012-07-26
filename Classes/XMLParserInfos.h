//
//  XMLParserInfos.h
//  AppliAgencesNetty
//
//  Created by Christophe Bergé on 25/07/12.
//  Copyright (c) 2012 __MyCompanyName__. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "Infos.h"
#import "AppliAgencesNettyAppDelegate.h"

@class AppliAgencesNettyAppDelegate, Infos;

@interface XMLParserInfos : NSObject{
    NSMutableString *currentElementValue;
	Infos *infos;
	AppliAgencesNettyAppDelegate *appDelegate;
}

- (XMLParserInfos *) initXMLParser;

@end
