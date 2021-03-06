/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:56:11 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/NotesShared.framework/NotesShared
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <NotesShared/NotesShared-Structs.h>
@class ICDrawingCommandData;

@interface ICDrawingCommand : NSObject {

	BOOL _hidden;
	ICDrawingCommandData* _data;
	TopoID _timestamp;

}

@property (nonatomic,readonly) ICDrawingCommandData * data;              //@synthesize data=_data - In the implementation block
@property (nonatomic,readonly) BOOL hidden;                              //@synthesize hidden=_hidden - In the implementation block
@property (nonatomic,readonly) TopoID timestamp;                         //@synthesize timestamp=_timestamp - In the implementation block
-(BOOL)hidden;
-(TopoID)timestamp;
-(id)initWithCommand:(id)arg1 hidden:(BOOL)arg2 timestamp:(TopoID)arg3 ;
-(ICDrawingCommandData *)data;
-(id)initWithArchive:(const Command*)arg1 version:(unsigned)arg2 sortedUUIDs:(id)arg3 ;
-(unsigned)saveToArchive:(Command*)arg1 sortedUUIDs:(id)arg2 withPathData:(BOOL)arg3 ;
-(unsigned long long)hash;
-(id)description;
-(BOOL)isEqual:(id)arg1 ;
-(BOOL)isEqualDrawingCommand:(id)arg1 ;
@end

