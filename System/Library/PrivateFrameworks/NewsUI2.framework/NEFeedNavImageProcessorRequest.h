/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:56:41 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/NewsUI2.framework/NewsUI2
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <NewsUI2/NewsUI2-Structs.h>
#import <libobjc.A.dylib/TSProcessedImageRequestType.h>

@class NSDictionary, NSString;

@interface NEFeedNavImageProcessorRequest : NSObject <TSProcessedImageRequestType> {

	 assetHandles;
	 feedNavImageSize;
	 scale;
	 cornerRadius;

}

@property (copy,nonatomic) NSDictionary * assetHandles; 
@property (readonly,nonatomic) NSString * cacheIdentifier; 
-(void)setAssetHandles:(NSDictionary *)arg1 ;
-(id)init;
-(NSString *)cacheIdentifier;
-(NSDictionary *)assetHandles;
-(id)initWithFeedNavImageAssetHandle:(id)arg1 feedNavImageSize:(CGSize)arg2 feedNavImageStyler:(id)arg3 scale:(double)arg4 ;
@end

