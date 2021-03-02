/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:55:22 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/VideoProcessing.framework/VideoProcessing
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <VideoProcessing/VideoProcessing-Structs.h>
#import <libobjc.A.dylib/VCPTaskProcessingClientProtocol.h>

@class NSXPCConnection;

@interface VCPTaskProcessingService : NSObject <VCPTaskProcessingClientProtocol> {

	NSXPCConnection* _connection;

}
+(id)service;
-(void)requestImageProcessingTask:(Class)arg1 forAssetURL:(id)arg2 withOptions:(id)arg3 andCompletionHandler:(/*^block*/id)arg4 ;
-(id)sandboxExtensionForURL:(id)arg1 error:(id*)arg2 ;
-(id)connection;
-(void)requestImageProcessingTask:(Class)arg1 forPixelBuffer:(CVBufferRef)arg2 withOptions:(id)arg3 andCompletionHandler:(/*^block*/id)arg4 ;
@end
