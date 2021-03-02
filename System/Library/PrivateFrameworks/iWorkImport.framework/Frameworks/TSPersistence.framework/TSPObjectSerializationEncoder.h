/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 11:12:01 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/iWorkImport.framework/Frameworks/TSPersistence.framework/TSPersistence
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <TSPersistence/TSPersistence-Structs.h>
#import <TSPersistence/TSPEncoder.h>

@protocol OS_dispatch_queue, OS_dispatch_data;
@class NSError, NSObject, TSPMemoryComponentWriteChannel, NSString;

@interface TSPObjectSerializationEncoder : NSObject <TSPEncoder> {

	BOOL _alwaysDefragmentData;
	NSError* _error;
	BOOL _isFinished;
	NSObject*<OS_dispatch_queue> _accessQueue;
	ObjectSerializationDirectory* _directory;
	TSPMemoryComponentWriteChannel* _metadataWriteChannel;
	TSPMemoryComponentWriteChannel* _rootComponentWriteChannel;
	NSObject*<OS_dispatch_data> _encodedData;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)init;
-(id)initWithAlwaysDefragmentData:(BOOL)arg1 ;
-(void)appendData:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)finishEncodingWithCompletion:(/*^block*/id)arg1 ;
-(id)newRootObjectComponentWriteChannel;
-(id)newMetadataComponentWriteChannel;
@end
