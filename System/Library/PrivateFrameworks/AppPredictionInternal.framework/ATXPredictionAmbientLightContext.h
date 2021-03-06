/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:58:16 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/AppPredictionInternal.framework/AppPredictionInternal
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <AppPredictionInternal/ATXPredictionContextDomain.h>

@interface ATXPredictionAmbientLightContext : ATXPredictionContextDomain {

	int _ambientLightType;

}

@property (nonatomic,readonly) int ambientLightType;              //@synthesize ambientLightType=_ambientLightType - In the implementation block
-(id)encodeAsProto;
-(id)initWithAmbientLightType:(int)arg1 ;
-(id)jsonDict;
-(id)initWithProtoData:(id)arg1 ;
-(id)description;
-(BOOL)isEqual:(id)arg1 ;
-(id)initWithProto:(id)arg1 ;
-(id)proto;
-(int)ambientLightType;
-(BOOL)isEqualToATXPredictionAmbientLightContext:(id)arg1 ;
@end

