/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 11:07:38 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/BrailleTranslation.framework/BrailleTranslation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <BrailleTranslation/BrailleTranslation-Structs.h>
@interface BRLTTokenRange : NSObject {

	long long _token;
	NSRange _range;

}

@property (assign,nonatomic) NSRange range;                //@synthesize range=_range - In the implementation block
@property (assign,nonatomic) long long token;              //@synthesize token=_token - In the implementation block
-(void)setToken:(long long)arg1 ;
-(NSRange)range;
-(long long)token;
-(void)setRange:(NSRange)arg1 ;
-(id)initWithRange:(NSRange)arg1 token:(long long)arg2 ;
@end

