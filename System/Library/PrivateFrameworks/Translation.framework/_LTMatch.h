/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:55:34 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/Translation.framework/Translation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <Translation/Translation-Structs.h>
@class NSDictionary, NSString;

@interface _LTMatch : NSObject {

	NSDictionary* _node;
	NSString* _token;
	NSRange _range;

}

@property (nonatomic,retain) NSDictionary * node;              //@synthesize node=_node - In the implementation block
@property (assign,nonatomic) NSRange range;                    //@synthesize range=_range - In the implementation block
@property (nonatomic,retain) NSString * token;                 //@synthesize token=_token - In the implementation block
-(void)setToken:(NSString *)arg1 ;
-(NSDictionary *)node;
-(NSRange)range;
-(void)setNode:(NSDictionary *)arg1 ;
-(NSString *)token;
-(id)description;
-(id)initWithNode:(id)arg1 range:(NSRange)arg2 ;
-(void)setRange:(NSRange)arg1 ;
@end

