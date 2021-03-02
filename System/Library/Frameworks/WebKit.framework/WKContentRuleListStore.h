/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:54:14 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/Frameworks/WebKit.framework/WebKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <WebKit/WebKit-Structs.h>
#import <libobjc.A.dylib/WKObject.h>

@class NSString;

@interface WKContentRuleListStore : NSObject <WKObject> {

	ObjectStorage<API::ContentRuleListStore> _contentRuleListStore;

}

@property (readonly) Object* _apiObject; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)storeWithURL:(id)arg1 ;
+(id)defaultStoreWithLegacyFilename;
+(id)storeWithURLAndLegacyFilename:(id)arg1 ;
+(id)defaultStore;
-(void)dealloc;
-(void)_compileContentRuleListForIdentifier:(id)arg1 encodedContentRuleList:(id)arg2 completionHandler:(/*^block*/id)arg3 ;
-(void)compileContentRuleListForIdentifier:(id)arg1 encodedContentRuleList:(id)arg2 completionHandler:(/*^block*/id)arg3 ;
-(void)lookUpContentRuleListForIdentifier:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)getAvailableContentRuleListIdentifiers:(/*^block*/id)arg1 ;
-(void)removeContentRuleListForIdentifier:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)_removeAllContentRuleLists;
-(void)_invalidateContentRuleListVersionForIdentifier:(id)arg1 ;
-(void)_getContentRuleListSourceForIdentifier:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(Object*)_apiObject;
@end
