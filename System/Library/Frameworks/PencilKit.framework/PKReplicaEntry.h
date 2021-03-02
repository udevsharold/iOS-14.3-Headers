/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:56:54 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/Frameworks/PencilKit.framework/PencilKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/NSCoding.h>

@class PKDrawing;

@interface PKReplicaEntry : NSObject <NSCoding> {

	unsigned _replicaUUIDIndex;
	unsigned _clock;
	unsigned _subclock;
	BOOL _inUse;
	PKDrawing* _drawing;

}

@property (assign,nonatomic) unsigned replicaUUIDIndex;              //@synthesize replicaUUIDIndex=_replicaUUIDIndex - In the implementation block
@property (assign,nonatomic) unsigned clock;                         //@synthesize clock=_clock - In the implementation block
@property (assign,nonatomic) unsigned subclock;                      //@synthesize subclock=_subclock - In the implementation block
@property (assign,nonatomic) BOOL inUse;                             //@synthesize inUse=_inUse - In the implementation block
@property (assign,nonatomic) PKDrawing * drawing;                    //@synthesize drawing=_drawing - In the implementation block
-(void)setClock:(unsigned)arg1 ;
-(unsigned)clock;
-(unsigned)subclock;
-(id)initWithCoder:(id)arg1 ;
-(PKDrawing *)drawing;
-(id)description;
-(void)setDrawing:(PKDrawing *)arg1 ;
-(BOOL)inUse;
-(void)encodeWithCoder:(id)arg1 ;
-(void)setSubclock:(unsigned)arg1 ;
-(unsigned)replicaUUIDIndex;
-(void)setReplicaUUIDIndex:(unsigned)arg1 ;
-(void)setInUse:(BOOL)arg1 ;
-(id)initWithReplicaUUIDIndex:(unsigned)arg1 clock:(unsigned)arg2 subclock:(unsigned)arg3 inUse:(BOOL)arg4 forDrawing:(id)arg5 ;
@end
