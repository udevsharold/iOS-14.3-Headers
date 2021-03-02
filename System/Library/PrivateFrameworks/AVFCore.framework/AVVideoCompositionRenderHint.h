/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:52:39 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/AVFCore.framework/AVFCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <AVFCore/AVFCore-Structs.h>
@class AVVideoCompositionRenderHintInternal;

@interface AVVideoCompositionRenderHint : NSObject {

	AVVideoCompositionRenderHintInternal* _internal;

}

@property (nonatomic,readonly) SCD_Struct_AV6 startCompositionTime; 
@property (nonatomic,readonly) SCD_Struct_AV6 endCompositionTime; 
-(id)initWithStartCompositionTime:(SCD_Struct_AV6)arg1 endCompositionTime:(SCD_Struct_AV6)arg2 subsequentStartCompositionTime:(SCD_Struct_AV6)arg3 subsequentEndCompositionTime:(SCD_Struct_AV6)arg4 ;
-(void)dealloc;
-(SCD_Struct_AV6)endCompositionTime;
-(SCD_Struct_AV6)startCompositionTime;
-(SCD_Struct_AV6)subsequentStartCompositionTime;
-(SCD_Struct_AV6)subsequentEndCompositionTime;
@end
