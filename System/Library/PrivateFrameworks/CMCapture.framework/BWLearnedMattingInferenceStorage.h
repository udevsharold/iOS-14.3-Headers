/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:55:59 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/CMCapture.framework/CMCapture
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CMCapture/BWInferenceProviderStorage.h>

@class NSArray;

@interface BWLearnedMattingInferenceStorage : BWInferenceProviderStorage {

	NSArray* _espressoStorages;

}

@property (nonatomic,readonly) NSArray * espressoStorages;              //@synthesize espressoStorages=_espressoStorages - In the implementation block
-(void)dealloc;
-(id)initWithRequirementsNeedingPixelBuffers:(id)arg1 requirementsNeedingPixelBufferPools:(id)arg2 espressoStorages:(id)arg3 ;
-(NSArray *)espressoStorages;
@end

