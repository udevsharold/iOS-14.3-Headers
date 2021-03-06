/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 11:08:09 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/KeyboardServices.framework/KeyboardServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/_KSTextReplacementStoreProtocol.h>
#import <libobjc.A.dylib/_KSTextReplacementCancellation.h>

@class _KSTextReplacementServerConnection, NSString;

@interface _KSTextReplacementClientStore : NSObject <_KSTextReplacementStoreProtocol, _KSTextReplacementCancellation> {

	_KSTextReplacementServerConnection* _connection;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)init;
-(id)textReplacementEntries;
-(void)cancelPendingUpdates;
-(void)addEntries:(id)arg1 removeEntries:(id)arg2 withCompletionHandler:(/*^block*/id)arg3 ;
-(void)removeAllEntries;
-(void)queryTextReplacementsWithCallback:(/*^block*/id)arg1 ;
-(void)performTransaction:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)queryTextReplacementsWithPredicate:(id)arg1 callback:(/*^block*/id)arg2 ;
-(void)requestSyncWithCompletionBlock:(/*^block*/id)arg1 ;
-(void)modifyEntry:(id)arg1 toEntry:(id)arg2 withCompletionHandler:(/*^block*/id)arg3 ;
-(id)phraseShortcuts;
@end

