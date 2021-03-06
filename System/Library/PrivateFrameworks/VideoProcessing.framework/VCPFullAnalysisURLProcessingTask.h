/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:55:22 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/VideoProcessing.framework/VideoProcessing
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/VCPMADTaskProtocol.h>

@class NSURL;

@interface VCPFullAnalysisURLProcessingTask : NSObject <VCPMADTaskProtocol> {

	BOOL _cancel;
	BOOL _noResultStrip;
	NSURL* _assetURL;
	NSURL* _pairedAssetURL;
	unsigned long long _analysisTypes;
	/*^block*/id _progressHandler;
	/*^block*/id _completionHandler;

}
+(id)taskForURLAsset:(id)arg1 withOptions:(id)arg2 analysisTypes:(unsigned long long)arg3 progressHandler:(/*^block*/id)arg4 completionHandler:(/*^block*/id)arg5 ;
-(int)run;
-(id)initWithURLAsset:(id)arg1 withOptions:(id)arg2 analysisTypes:(unsigned long long)arg3 progressHandler:(/*^block*/id)arg4 completionHandler:(/*^block*/id)arg5 ;
-(void)cancel;
-(float)resourceRequirement;
@end

