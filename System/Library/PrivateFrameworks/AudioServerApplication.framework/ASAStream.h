/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 11:07:35 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/AudioServerApplication.framework/AudioServerApplication
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <AudioServerApplication/ASAObject.h>

@class NSString, ASAAudioFormat, NSArray;

@interface ASAStream : ASAObject

@property (nonatomic,copy) NSString * name; 
@property (getter=isActive,nonatomic,readonly) BOOL active; 
@property (getter=isInput,nonatomic,readonly) BOOL input; 
@property (getter=isOutput,nonatomic,readonly) BOOL output; 
@property (nonatomic,readonly) unsigned terminalType; 
@property (nonatomic,readonly) unsigned startingChannel; 
@property (nonatomic,readonly) unsigned latency; 
@property (nonatomic,copy) ASAAudioFormat * virtualFormat; 
@property (nonatomic,copy) ASAAudioFormat * physicalFormat; 
@property (nonatomic,copy,readonly) NSArray * availableVirtualFormats; 
@property (nonatomic,copy,readonly) NSArray * availablePhysicalFormats; 
@property (nonatomic,copy,readonly) NSArray * controlObjectIDs; 
@property (nonatomic,copy,readonly) NSArray * controls; 
@property (getter=isVirtualFormatSettable,nonatomic,readonly) BOOL virtualFormatSettable; 
@property (getter=isPhysicalFormatSettable,nonatomic,readonly) BOOL physicalFormatSettable; 
-(void)setName:(NSString *)arg1 ;
-(unsigned)latency;
-(NSArray *)controls;
-(unsigned)terminalType;
-(BOOL)isInput;
-(BOOL)isActive;
-(NSString *)name;
-(ASAAudioFormat *)virtualFormat;
-(unsigned)startingChannel;
-(id)diagnosticDescriptionWithIndent:(id)arg1 walkTree:(BOOL)arg2 ;
-(id)coreAudioClassName;
-(NSArray *)controlObjectIDs;
-(BOOL)isVirtualFormatSettable;
-(BOOL)isPhysicalFormatSettable;
-(NSArray *)availableVirtualFormats;
-(ASAAudioFormat *)physicalFormat;
-(NSArray *)availablePhysicalFormats;
-(BOOL)isOutput;
-(void)setVirtualFormat:(ASAAudioFormat *)arg1 ;
-(void)setPhysicalFormat:(ASAAudioFormat *)arg1 ;
@end
