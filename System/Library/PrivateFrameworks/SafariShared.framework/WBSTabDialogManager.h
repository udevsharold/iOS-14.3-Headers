/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:55:24 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/SafariShared.framework/SafariShared
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <SafariShared/SafariShared-Structs.h>
@class NSMutableDictionary;

@interface WBSTabDialogManager : NSObject {

	NSMutableDictionary* _webProcessIDToDialogSetMapping;
	NSMutableDictionary* _tabIDToDialogQueueMapping;
	unsigned long long _queueCapacity;

}
-(void)_cancelDialogsInQueue:(id)arg1 tabID:(unsigned long long)arg2 context:(id)arg3 ;
-(void)presentNextDialogForSlot:(SCD_Struct_WB114)arg1 ;
-(id)init;
-(void)dismissCurrentDialogForTabID:(unsigned long long)arg1 withResponse:(id)arg2 ;
-(id)_dialogBlockingSlot:(SCD_Struct_WB114)arg1 ;
-(long long)_enqueueDialog:(id)arg1 ;
-(id)_dialogBlockingWebProcessID:(int)arg1 ;
-(void)cancelAllDialogsForTabID:(unsigned long long)arg1 context:(id)arg2 ;
-(void)enqueueOrPresentDialog:(id)arg1 inSlot:(SCD_Struct_WB114)arg2 ;
-(void)cancelAllDialogsWithContext:(id)arg1 ;
-(id)description;
-(void)cancelAllDialogsBlockingSlot:(SCD_Struct_WB114)arg1 ;
-(void)enqueueOrPresentDialogInSlot:(SCD_Struct_WB114)arg1 presentationBlock:(/*^block*/id)arg2 dismissalBlock:(/*^block*/id)arg3 blocksWebProcessUntilDismissed:(BOOL)arg4 ;
-(void)cancelAllDialogsForTabID:(unsigned long long)arg1 reason:(id)arg2 ;
-(void)cancelAllDialogsForTabID:(unsigned long long)arg1 ;
-(void)cancelAllDialogsBlockingWebProcessID:(int)arg1 ;
-(void)_dismissDialog:(id)arg1 withResponse:(id)arg2 ;
-(id)_queueForTabID:(unsigned long long)arg1 createIfNeeded:(BOOL)arg2 ;
-(id)_setForWebProcessID:(int)arg1 createIfNeeded:(BOOL)arg2 ;
@end
