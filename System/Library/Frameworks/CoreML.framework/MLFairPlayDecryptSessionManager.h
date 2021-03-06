/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:54:42 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/Frameworks/CoreML.framework/CoreML
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_dispatch_queue;
#import <CoreML/CoreML-Structs.h>
@class NSMutableDictionary, NSObject;

@interface MLFairPlayDecryptSessionManager : NSObject {

	NSMutableDictionary* _modelPathToSessionID;
	SCD_Struct_ML58* _sessionContext;
	NSObject*<OS_dispatch_queue> _syncQueue;

}

@property (retain,readonly) NSMutableDictionary * modelPathToSessionID;              //@synthesize modelPathToSessionID=_modelPathToSessionID - In the implementation block
@property (readonly) SCD_Struct_ML58* sessionContext;                                //@synthesize sessionContext=_sessionContext - In the implementation block
@property (retain,readonly) NSObject*<OS_dispatch_queue> syncQueue;                  //@synthesize syncQueue=_syncQueue - In the implementation block
-(SCD_Struct_ML58*)sessionContext;
-(id)init;
-(void)dealloc;
-(NSObject*<OS_dispatch_queue>)syncQueue;
-(BOOL)startDecryptionOfModelAtPath:(id)arg1 usingKeyBlob:(id)arg2 error:(id*)arg3 ;
-(int)stopDecryptionOfModelAtPath:(id)arg1 ;
-(BOOL)stopDecryptionOfModelAtPath:(id)arg1 error:(id*)arg2 ;
-(NSMutableDictionary *)modelPathToSessionID;
@end

