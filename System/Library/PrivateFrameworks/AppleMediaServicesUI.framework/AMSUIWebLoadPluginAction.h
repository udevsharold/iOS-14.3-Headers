/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:56:39 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/AppleMediaServicesUI.framework/AppleMediaServicesUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/AMSUIWebActionRunnable.h>

@class NSString, AMSUIWebClientContext;

@interface AMSUIWebLoadPluginAction : NSObject <AMSUIWebActionRunnable> {

	NSString* _bundleIdentifier;
	AMSUIWebClientContext* _context;

}

@property (nonatomic,readonly) AMSUIWebClientContext * context;              //@synthesize context=_context - In the implementation block
@property (nonatomic,readonly) NSString * bundleIdentifier;                  //@synthesize bundleIdentifier=_bundleIdentifier - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(AMSUIWebClientContext *)context;
-(NSString *)bundleIdentifier;
-(id)initWithJSObject:(id)arg1 context:(id)arg2 ;
-(id)runAction;
@end
