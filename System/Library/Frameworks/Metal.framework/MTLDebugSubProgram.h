/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:55:20 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/Frameworks/Metal.framework/Metal
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <Metal/Metal-Structs.h>
@class MTLDebugInstrumentationData, NSString;

@interface MTLDebugSubProgram : NSObject {

	MTLDebugInstrumentationData* _data;
	DebugSubProgram* _debugSubProgram;

}

@property (nonatomic,readonly) NSString * filename; 
@property (nonatomic,readonly) NSString * name; 
@property (nonatomic,readonly) unsigned line; 
-(NSString *)filename;
-(unsigned)line;
-(id)retain;
-(oneway void)release;
-(NSString *)name;
-(oneway void)releaseInternal;
@end

