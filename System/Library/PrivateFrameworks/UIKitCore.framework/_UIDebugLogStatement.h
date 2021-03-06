/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:51:37 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSString;

@interface _UIDebugLogStatement : NSObject {

	long long _type;
	unsigned long long _indentLevel;
	NSString* _prefix;
	NSString* _text;

}

@property (assign,nonatomic) long long type;                              //@synthesize type=_type - In the implementation block
@property (assign,nonatomic) unsigned long long indentLevel;              //@synthesize indentLevel=_indentLevel - In the implementation block
@property (nonatomic,copy) NSString * prefix;                             //@synthesize prefix=_prefix - In the implementation block
@property (nonatomic,copy) NSString * text;                               //@synthesize text=_text - In the implementation block
-(NSString *)prefix;
-(id)init;
-(NSString *)text;
-(void)setType:(long long)arg1 ;
-(void)setText:(NSString *)arg1 ;
-(long long)type;
-(unsigned long long)indentLevel;
-(void)setIndentLevel:(unsigned long long)arg1 ;
-(void)setPrefix:(NSString *)arg1 ;
@end

