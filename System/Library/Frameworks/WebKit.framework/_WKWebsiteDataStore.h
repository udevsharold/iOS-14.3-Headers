/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:54:15 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/Frameworks/WebKit.framework/WebKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <WebKit/WebKit-Structs.h>
@interface _WKWebsiteDataStore : NSObject {

	RetainPtr<WKWebsiteDataStore>* _dataStore;

}

@property (getter=isNonPersistent,readonly) BOOL nonPersistent; 
+(id)defaultDataStore;
+(id)nonPersistentDataStore;
-(BOOL)isNonPersistent;
-(void)removeDataOfTypes:(unsigned long long)arg1 forDataRecords:(id)arg2 completionHandler:(/*^block*/id)arg3 ;
-(void)fetchDataRecordsOfTypes:(unsigned long long)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)removeDataOfTypes:(unsigned long long)arg1 modifiedSince:(id)arg2 completionHandler:(/*^block*/id)arg3 ;
-(id)initWithDataStore:(id)arg1 ;
@end
