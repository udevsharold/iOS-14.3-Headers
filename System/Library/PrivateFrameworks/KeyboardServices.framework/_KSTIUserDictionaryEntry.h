/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 11:08:09 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/KeyboardServices.framework/KeyboardServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

@class NSString, NSDate;


@protocol _KSTIUserDictionaryEntry <NSObject>
@property (nonatomic,copy) NSString * phrase; 
@property (nonatomic,copy) NSString * shortcut; 
@property (nonatomic,retain) NSDate * timestamp; 
@required
-(NSDate *)timestamp;
-(void)setTimestamp:(id)arg1;
-(void)setPhrase:(id)arg1;
-(void)setShortcut:(id)arg1;
-(NSString *)shortcut;
-(NSString *)phrase;

@end
