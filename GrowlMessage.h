//
//  GrowlMessage.h
//  Sidestep
//
//  Created by Steve Warren on 11/26/10.
//  Copyright 2010 __MyCompanyName__. All rights reserved.
//

#import <Cocoa/Cocoa.h>


@interface GrowlMessage : NSObject { 
	NSUserDefaults *setting;
}

- (void) message:(NSString *)sendMessage;

@end
