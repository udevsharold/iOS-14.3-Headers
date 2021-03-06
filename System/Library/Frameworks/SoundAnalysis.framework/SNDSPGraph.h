/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 11:07:19 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/Frameworks/SoundAnalysis.framework/SoundAnalysis
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <SoundAnalysis/SoundAnalysis-Structs.h>
@class NSString, NSSet;

@interface SNDSPGraph : NSObject {

	shared_ptr<DSPGraph::Graph>* _graph;

}

@property (nonatomic,readonly) shared_ptr<DSPGraph::Graph>* graph;              //@synthesize graph=_graph - In the implementation block
@property (nonatomic,copy) NSString * name; 
@property (nonatomic,readonly) long long numberOfInputs; 
@property (nonatomic,readonly) long long numberOfOutputs; 
@property (nonatomic,readonly) long long sliceDurationInSamples; 
@property (nonatomic,readonly) BOOL configured; 
@property (nonatomic,readonly) BOOL initialized; 
@property (nonatomic,readonly) NSSet * boxes; 
-(BOOL)initialize;
-(shared_ptr<DSPGraph::Graph>*)graph;
-(BOOL)configure;
-(void)setName:(NSString *)arg1 ;
-(id)init;
-(long long)numberOfInputs;
-(long long)numberOfOutputs;
-(BOOL)reset;
-(NSSet *)boxes;
-(BOOL)unconfigure;
-(BOOL)initialized;
-(NSString *)name;
-(BOOL)configured;
-(BOOL)uninitialize;
-(BOOL)setAUStrip:(id)arg1 ;
-(BOOL)setPropertyStrip:(id)arg1 withResourcePath:(id)arg2 ;
-(id)initWithDSPGraph:(shared_ptr<DSPGraph::Graph>*)arg1 ;
-(BOOL)setVariableSliceDuration:(long long)arg1 forSampleRate:(long long)arg2 ;
-(long long)sliceDurationInSamples;
-(BOOL)getParameter:(float*)arg1 forID:(unsigned)arg2 ;
-(BOOL)hasParameter:(unsigned)arg1 ;
-(BOOL)setParameter:(float)arg1 forID:(unsigned)arg2 ;
-(BOOL)getPropertySize:(unsigned*)arg1 isWritable:(BOOL*)arg2 forID:(unsigned)arg3 ;
-(BOOL)getProperty:(void*)arg1 withSize:(unsigned*)arg2 forID:(unsigned)arg3 ;
-(BOOL)setProperty:(const void*)arg1 withSize:(unsigned)arg2 forID:(unsigned)arg3 ;
-(id)boxWithName:(id)arg1 ;
-(void)writeDotFileToPath:(id)arg1 ;
@end

