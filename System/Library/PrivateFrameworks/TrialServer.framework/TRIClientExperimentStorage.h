/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:59:46 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/TrialServer.framework/TrialServer
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol TRIPaths;
@interface TRIClientExperimentStorage : NSObject {

	id<TRIPaths> _paths;

}
-(id)init;
-(id)initWithPaths:(id)arg1 ;
-(id)loadArtifactWithExperiment:(id)arg1 isFilePresent:(BOOL*)arg2 ;
-(id)_urlForExperiment:(id)arg1 ;
-(BOOL)saveArtifact:(id)arg1 ;
-(BOOL)removeArtifactWithExperiment:(id)arg1 ;
@end
