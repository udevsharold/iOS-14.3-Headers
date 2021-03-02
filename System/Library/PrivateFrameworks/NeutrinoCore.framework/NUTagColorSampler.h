/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:58:13 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/NeutrinoCore.framework/NeutrinoCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <NeutrinoCore/NUColorSampler.h>

@class NSString;

@interface NUTagColorSampler : NUColorSampler {

	NSString* _tag;

}

@property (nonatomic,readonly) NSString * tag;              //@synthesize tag=_tag - In the implementation block
-(NSString *)tag;
-(id)_pipelineFilters;
-(id)initWithComposition:(id)arg1 tag:(id)arg2 ;
-(id)initWithComposition:(id)arg1 tag:(id)arg2 responseQueue:(id)arg3 ;
@end
