/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 11:08:46 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/SilexWeb.framework/SilexWeb
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/SWContentRuleManager.h>

@protocol SWContentRuleManager <NSObject>
@required
-(void)addContentRuleList:(id)arg1 identifier:(id)arg2;
-(void)removeContentListForIdentifier:(id)arg1;
-(id)configureContentRules;

@end


@protocol OS_dispatch_group;
@class WKUserContentController, NSObject, NSString;

@interface SWContentRuleManager : NSObject <SWContentRuleManager> {

	WKUserContentController* _userContentController;
	NSObject*<OS_dispatch_group> _dispatchGroup;

}

@property (nonatomic,readonly) WKUserContentController * userContentController;              //@synthesize userContentController=_userContentController - In the implementation block
@property (nonatomic,readonly) NSObject*<OS_dispatch_group> dispatchGroup;                   //@synthesize dispatchGroup=_dispatchGroup - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(WKUserContentController *)userContentController;
-(NSObject*<OS_dispatch_group>)dispatchGroup;
-(void)addContentRuleList:(id)arg1 identifier:(id)arg2 ;
-(void)removeContentListForIdentifier:(id)arg1 ;
-(id)configureContentRules;
-(id)initWithUserContentController:(id)arg1 ;
@end

