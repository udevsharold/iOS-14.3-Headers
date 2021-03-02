/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:55:59 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/CMCapture.framework/CMCapture
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol MTLBuffer;
@class NSString;

@interface FigMetalAllocatorDescriptor : NSObject {

	BOOL _dryRun;
	BOOL _wireMemory;
	NSString* _label;
	unsigned long long _memSize;
	unsigned long long _resourceOptions;
	id<MTLBuffer> _externalBuffer;

}

@property (nonatomic,retain) id<MTLBuffer> externalBuffer;                    //@synthesize externalBuffer=_externalBuffer - In the implementation block
@property (nonatomic,retain) NSString * label;                                //@synthesize label=_label - In the implementation block
@property (assign,nonatomic) unsigned long long memSize;                      //@synthesize memSize=_memSize - In the implementation block
@property (assign,nonatomic) unsigned long long resourceOptions;              //@synthesize resourceOptions=_resourceOptions - In the implementation block
@property (assign,nonatomic) BOOL dryRun;                                     //@synthesize dryRun=_dryRun - In the implementation block
@property (assign,nonatomic) BOOL wireMemory;                                 //@synthesize wireMemory=_wireMemory - In the implementation block
-(void)setResourceOptions:(unsigned long long)arg1 ;
-(unsigned long long)resourceOptions;
-(id)init;
-(unsigned long long)memSize;
-(BOOL)dryRun;
-(void)setDryRun:(BOOL)arg1 ;
-(void)setMemSize:(unsigned long long)arg1 ;
-(BOOL)wireMemory;
-(void)setWireMemory:(BOOL)arg1 ;
-(id<MTLBuffer>)externalBuffer;
-(void)setExternalBuffer:(id<MTLBuffer>)arg1 ;
-(void)setLabel:(NSString *)arg1 ;
-(NSString *)label;
@end
