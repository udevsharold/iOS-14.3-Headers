/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 11:07:15 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/Frameworks/ModelIO.framework/ModelIO
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <ModelIO/ModelIO-Structs.h>
@class NSMutableArray, NSArray;

@interface MDLScene : NSObject {

	mutex* _sceneMutex;
	vector<ModelIO::RTRenderable *, std::__1::allocator<ModelIO::RTRenderable *> >* _sceneObjects;
	vector<MDLLight *, std::__1::allocator<MDLLight *> >* _sceneLights;
	NSMutableArray* _objects;
	int _signature;

}

@property (nonatomic,retain,readonly) NSArray * objects;              //@synthesize objects=_objects - In the implementation block
-(void)clear;
-(id)init;
-(void)dealloc;
-(void)addObject:(id)arg1 ;
-(NSArray *)objects;
-(id)raytraceSceneWithCamera:(const RTCamera*)arg1 reflection:(id)arg2 irradiance:(id)arg3 ;
-(int)acquireLockGuard;
-(void)releaseLockGuard:(int)arg1 ;
-(5)hitTestRayFrom:(id)arg1 ;
-(BOOL)castRayFrom:(RTCamera*)arg1 withDirection:(RTIntersectionResult*)arg2 ;
@end

