/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:54:05 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/CoreUtils.framework/CoreUtils
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <CoreUtils/CoreUtils-Structs.h>
@class NSString;

@interface CUKeyValueStoreWriter : NSObject {

	cdb_make* _cdb;
	BOOL _cdbStarted;
	NSString* _finalPath;
	int _tempFD;
	char _tempPath[1024];

}
-(id)init;
-(BOOL)startAtPath:(id)arg1 error:(id*)arg2 ;
-(BOOL)finishAndReturnError:(id*)arg1 ;
-(BOOL)addKey:(id)arg1 value:(id)arg2 error:(id*)arg3 ;
-(void)dealloc;
-(void)cancel;
@end
