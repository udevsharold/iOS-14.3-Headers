/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:52:40 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/AVFCore.framework/AVFCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_dispatch_queue;
#import <AVFCore/AVFCore-Structs.h>
@class AVWeakReference, AVDispatchOnce, NSMutableURLRequest, NSURLResponse, NSURLRequest, NSObject, NSMutableData, NSDictionary, AVAssetResourceLoadingContentInformationRequest, AVAssetResourceLoadingDataRequest, AVAssetResourceLoadingRequestor;

@interface AVAssetResourceLoadingRequestInternal : NSObject {

	AVWeakReference* weakReference;
	AVWeakReference* weakReferenceToResourceLoader;
	OpaqueFigCustomURLLoaderRef customURLLoader;
	OpaqueFigCustomURLHandlerRef customURLHandler;
	CFDictionaryRef requestInfo;
	unsigned long long requestID;
	AVDispatchOnce* responseInfoSentOnceToken;
	NSMutableURLRequest* URLRequest;
	NSURLResponse* response;
	NSURLRequest* redirect;
	NSObject*<OS_dispatch_queue> dataCachingQueue;
	NSMutableData* cachedData;
	NSDictionary* cachedContentInformation;
	AVAssetResourceLoadingContentInformationRequest* contentInformationRequest;
	AVAssetResourceLoadingDataRequest* dataRequest;
	int finished;
	int cancelled;
	int sentContentInfo;
	/*^block*/id streamingKeyRequestCompletionHandler;
	OpaqueFigCPECryptorRef figCryptor;
	AVAssetResourceLoadingRequestor* requestor;
	unsigned long long cryptorKeyRequestID;

}
@end

