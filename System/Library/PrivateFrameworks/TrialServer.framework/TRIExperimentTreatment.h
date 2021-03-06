/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:59:46 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/TrialServer.framework/TrialServer
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <TrialServer/TrialServer-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@class TRIExperimentDeployment, NSString;

@interface TRIExperimentTreatment : NSObject <NSCopying> {

	TRIExperimentDeployment* _experimentDeployment;
	NSString* _treatmentId;

}

@property (nonatomic,readonly) TRIExperimentDeployment * experimentDeployment;              //@synthesize experimentDeployment=_experimentDeployment - In the implementation block
@property (nonatomic,readonly) NSString * treatmentId;                                      //@synthesize treatmentId=_treatmentId - In the implementation block
+(id)treatmentWithExperimentDeployment:(id)arg1 treatmentId:(id)arg2 ;
-(TRIExperimentDeployment *)experimentDeployment;
-(id)init;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)copyWithReplacementExperimentDeployment:(id)arg1 ;
-(id)copyWithReplacementTreatmentId:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(BOOL)isEqual:(id)arg1 ;
-(NSString *)treatmentId;
-(id)initWithExperimentDeployment:(id)arg1 treatmentId:(id)arg2 ;
-(BOOL)isEqualToTreatment:(id)arg1 ;
@end

