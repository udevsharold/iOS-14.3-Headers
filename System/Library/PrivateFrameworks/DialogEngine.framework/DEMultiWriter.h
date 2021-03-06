/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:55:28 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/DialogEngine.framework/DialogEngine
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/DEWriter.h>

@class NSMutableData, NSArray;

@interface DEMultiWriter : NSObject <DEWriter> {

	NSMutableData* _data;
	NSArray* _writers;

}

@property (nonatomic,retain) NSArray * writers;                 //@synthesize writers=_writers - In the implementation block
@property (nonatomic,retain) NSMutableData * data;              //@synthesize data=_data - In the implementation block
-(void)writeData:(id)arg1 ;
-(id)init;
-(NSMutableData *)data;
-(id)initWithWriters:(id)arg1 ;
-(void)setWriters:(NSArray *)arg1 ;
-(NSArray *)writers;
-(void)setData:(NSMutableData *)arg1 ;
-(void)close;
@end

