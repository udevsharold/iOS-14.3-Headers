/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:56:38 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/AppleMediaServicesUI.framework/AppleMediaServicesUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/AMSUIWebActionRunnable.h>

@class ACAccount, AMSUIWebClientContext, NSString;

@interface AMSUIWebFamilyAction : NSObject <AMSUIWebActionRunnable> {

	ACAccount* _account;
	AMSUIWebClientContext* _context;

}

@property (nonatomic,retain) ACAccount * account;                          //@synthesize account=_account - In the implementation block
@property (nonatomic,retain) AMSUIWebClientContext * context;              //@synthesize context=_context - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)setAccount:(ACAccount *)arg1 ;
-(ACAccount *)account;
-(void)setContext:(AMSUIWebClientContext *)arg1 ;
-(AMSUIWebClientContext *)context;
-(id)initWithJSObject:(id)arg1 context:(id)arg2 ;
-(id)runAction;
-(id)_dictionaryFromLookupResult:(id)arg1 ;
@end

