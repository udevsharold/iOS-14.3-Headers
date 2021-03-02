/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:55:17 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/Frameworks/AVKit.framework/AVKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <AVKit/AVSecondScreenConnection.h>

@class AVDisplayCriteria;

@interface AVSecondScreenContentViewConnection : AVSecondScreenConnection

@property (nonatomic,retain) AVDisplayCriteria * preferredDisplayCriteria; 
@property (assign,getter=isReadyToConnect,nonatomic) BOOL readyToConnect; 
@property (assign,getter=isPlaying,nonatomic) BOOL playing; 
@property (assign,nonatomic) BOOL requiresTVOutScreen; 
-(id)initWithContentView:(id)arg1 ;
@end
