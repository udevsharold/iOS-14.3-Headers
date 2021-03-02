/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 11:08:27 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/PhotoImaging.framework/PhotoImaging
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <NeutrinoCore/NURuleSystem.h>

@interface PIReframeRules : NURuleSystem

@property (readonly) BOOL isCandidateForReframe; 
@property (readonly) BOOL isCandidateForPerspective; 
@property (readonly) BOOL isCandidateForHorizon; 
+(id)factCandidateForPerspective;
+(id)factCandidateForVideo;
+(id)factCandidateForStill;
+(id)factCandidateForReframe;
+(id)pregateRulesSystemWithConstants:(id)arg1 ;
+(id)sharedPregateRules;
+(id)factCandidateForHorizon;
-(BOOL)isCandidateForReframe;
-(BOOL)isCandidateForHorizon;
-(BOOL)isCandidateForPerspective;
@end
