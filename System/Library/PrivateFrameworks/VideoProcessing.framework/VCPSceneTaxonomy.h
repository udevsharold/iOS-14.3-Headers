/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:55:22 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/VideoProcessing.framework/VideoProcessing
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class PVSceneTaxonomy;

@interface VCPSceneTaxonomy : NSObject {

	PVSceneTaxonomy* _sceneTaxonomy;

}
+(id)sharedTaxonomy;
-(id)init;
-(id)sceneNameFromSceneId:(unsigned)arg1 ;
-(id)sceneIdFromSceneName:(id)arg1 ;
@end
