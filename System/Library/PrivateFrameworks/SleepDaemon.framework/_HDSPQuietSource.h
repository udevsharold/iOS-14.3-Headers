/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 11:05:21 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/SleepDaemon.framework/SleepDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/HDSPSource.h>

@protocol HDSPSource;
@class NSString;

@interface _HDSPQuietSource : NSObject <HDSPSource> {

	BOOL _dontNotify;
	BOOL _dontSync;
	NSString* _sourceIdentifier;
	id<HDSPSource> _targetSource;

}

@property (nonatomic,retain) NSString * sourceIdentifier;              //@synthesize sourceIdentifier=_sourceIdentifier - In the implementation block
@property (nonatomic,retain) id<HDSPSource> targetSource;              //@synthesize targetSource=_targetSource - In the implementation block
@property (assign,nonatomic) BOOL dontNotify;                          //@synthesize dontNotify=_dontNotify - In the implementation block
@property (assign,nonatomic) BOOL dontSync;                            //@synthesize dontSync=_dontSync - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(BOOL)dontSync;
-(NSString *)sourceIdentifier;
-(BOOL)dontNotify;
-(void)setSourceIdentifier:(NSString *)arg1 ;
-(id<HDSPSource>)targetSource;
-(void)setTargetSource:(id<HDSPSource>)arg1 ;
-(void)setDontNotify:(BOOL)arg1 ;
-(void)setDontSync:(BOOL)arg1 ;
@end

