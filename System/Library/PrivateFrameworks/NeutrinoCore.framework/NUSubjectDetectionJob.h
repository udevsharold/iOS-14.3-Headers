/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:58:13 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/NeutrinoCore.framework/NeutrinoCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <NeutrinoCore/NURenderJob.h>

@class NSArray, NUSubjectDetectionRequest;

@interface NUSubjectDetectionJob : NURenderJob {

	NSArray* _observations;

}

@property (nonatomic,readonly) NUSubjectDetectionRequest * subjectDetectionRequest; 
@property (nonatomic,copy) NSArray * observations;                                               //@synthesize observations=_observations - In the implementation block
-(id)result;
-(id)initWithRequest:(id)arg1 ;
-(BOOL)render:(out id*)arg1 ;
-(void)cleanUp;
-(void)setObservations:(NSArray *)arg1 ;
-(NSArray *)observations;
-(BOOL)wantsCompleteStage;
-(BOOL)wantsOutputGeometry;
-(BOOL)wantsOutputImage;
-(id)scalePolicy;
-(id)initWithSubjectDetectionRequest:(id)arg1 ;
-(NUSubjectDetectionRequest *)subjectDetectionRequest;
-(id)subjectsInImage:(id)arg1 error:(out id*)arg2 ;
@end
