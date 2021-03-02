/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:55:28 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/DialogEngine.framework/DialogEngine
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/DEReader.h>

@protocol DEReader;
@class NSObject, NSMutableData;

@interface DERewindableReader : NSObject <DEReader> {

	BOOL _rewound;
	NSObject*<DEReader> _reader;
	NSMutableData* _rewindData;
	unsigned long long _rewindOffset;

}

@property (nonatomic,retain) NSObject*<DEReader> reader;                   //@synthesize reader=_reader - In the implementation block
@property (assign,nonatomic) BOOL rewound;                                 //@synthesize rewound=_rewound - In the implementation block
@property (nonatomic,retain) NSMutableData * rewindData;                   //@synthesize rewindData=_rewindData - In the implementation block
@property (assign,nonatomic) unsigned long long rewindOffset;              //@synthesize rewindOffset=_rewindOffset - In the implementation block
-(id)init;
-(NSObject*<DEReader>)reader;
-(void)dealloc;
-(BOOL)rewind;
-(id)readDataOfLength:(unsigned long long)arg1 ;
-(void)setRewound:(BOOL)arg1 ;
-(NSMutableData *)rewindData;
-(void)setRewindData:(NSMutableData *)arg1 ;
-(unsigned long long)rewindOffset;
-(void)setRewindOffset:(unsigned long long)arg1 ;
-(BOOL)rewound;
-(id)readData;
-(BOOL)isRewindable;
-(void)disableRewind;
-(id)initWithReader:(id)arg1 ;
-(void)setReader:(NSObject*<DEReader>)arg1 ;
-(void)close;
@end
