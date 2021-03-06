/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 11:08:21 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <OfficeImport/OfficeImport-Structs.h>
#import <OfficeImport/CMStylingArchiveManager.h>

@class NSMutableDictionary, NSDate, NSMutableString;

@interface CMProgressiveArchiveManager : CMStylingArchiveManager {

	const void* mClient;
	SCD_Struct_CM14* mCallBacks;
	NSMutableDictionary* mDataCache;
	BOOL mMainDataInited;
	NSDate* mStartDate;
	NSDate* mLastCommitDate;
	NSMutableString* mHtmlLogString;

}
-(BOOL)isCancelled;
-(void)pushText:(id)arg1 toPath:(id)arg2 ;
-(void)pushCssToPath:(id)arg1 ;
-(void)commitDataAtPath:(id)arg1 ;
-(void)closeResourceAtPath:(id)arg1 ;
-(id)copyResourceWithName:(id)arg1 type:(int)arg2 ;
-(void)pushData:(id)arg1 toPath:(id)arg2 ;
-(BOOL)isProgressive;
-(id)initWithClient:(const void*)arg1 andCallBacks:(SCD_Struct_CM14*)arg2 ;
@end

