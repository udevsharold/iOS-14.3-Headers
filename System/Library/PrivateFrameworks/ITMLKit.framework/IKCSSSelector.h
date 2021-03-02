/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:58:58 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/ITMLKit.framework/ITMLKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <ITMLKit/ITMLKit-Structs.h>
@class NSString;

@interface IKCSSSelector : NSObject {

	long long _type;
	NSString* _name;
	NSRange _range;

}

@property (assign) long long type;                                  //@synthesize type=_type - In the implementation block
@property (nonatomic,retain) NSString * name;                       //@synthesize name=_name - In the implementation block
@property (nonatomic,readonly) NSString * stringValue; 
@property (assign,nonatomic) NSRange range;                         //@synthesize range=_range - In the implementation block
-(NSRange)range;
-(void)setName:(NSString *)arg1 ;
-(void)setType:(long long)arg1 ;
-(NSString *)stringValue;
-(id)description;
-(long long)type;
-(NSString *)name;
-(void)setRange:(NSRange)arg1 ;
@end
