/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 11:07:44 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/Cards.framework/Cards
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/CRCommand.h>

@class NSDictionary, NSProgress, NSString;

@interface CRUpdateProgressCommand : NSObject <CRCommand> {

	BOOL _animatesProgress;
	unsigned long long commandDirection;
	NSDictionary* userInfo;
	unsigned long long _event;
	NSProgress* _progress;

}

@property (assign,nonatomic) unsigned long long event;                         //@synthesize event=_event - In the implementation block
@property (nonatomic,retain) NSProgress * progress;                            //@synthesize progress=_progress - In the implementation block
@property (assign,nonatomic) BOOL animatesProgress;                            //@synthesize animatesProgress=_animatesProgress - In the implementation block
@property (nonatomic,copy) NSDictionary * userInfo; 
@property (assign,nonatomic) unsigned long long commandDirection; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)setUserInfo:(NSDictionary *)arg1 ;
-(id)init;
-(unsigned long long)event;
-(NSDictionary *)userInfo;
-(void)setEvent:(unsigned long long)arg1 ;
-(void)setProgress:(NSProgress *)arg1 ;
-(NSProgress *)progress;
-(void)setAnimatesProgress:(BOOL)arg1 ;
-(unsigned long long)commandDirection;
-(void)setCommandDirection:(unsigned long long)arg1 ;
-(BOOL)animatesProgress;
@end

