/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 11:08:38 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/SceneIntelligence.framework/SceneIntelligence
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <SceneIntelligence/SceneIntelligence-Structs.h>
@interface SIPeopleSegmentation : NSObject {

	void* _context;
	void* _plan;
	SCD_Struct_SI0* _network;
	networkparams_t* _parameters;
	networkvariables_t* _variables;

}
-(id)init;
-(BOOL)initMLNetwork;
-(void)initMLVariables;
-(CGSize)inputResolution;
-(CGSize)outputResolution;
-(CVBufferRef)evaluateSemanticsForImage:(CVBufferRef)arg1 ;
-(void)copyResultsToTemporal;
-(CVBufferRef)copyResultsToPixelBuffer;
@end
