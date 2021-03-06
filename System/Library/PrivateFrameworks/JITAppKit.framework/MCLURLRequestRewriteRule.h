/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 11:08:09 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/JITAppKit.framework/JITAppKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSString, NSRegularExpression;

@interface MCLURLRequestRewriteRule : NSObject {

	/*^block*/id _block;
	float _priority;
	NSString* _name;
	NSRegularExpression* _matchPattern;

}

@property (nonatomic,copy) NSString * name;                                     //@synthesize name=_name - In the implementation block
@property (assign,nonatomic) float priority;                                    //@synthesize priority=_priority - In the implementation block
@property (nonatomic,readonly) NSRegularExpression * matchPattern;              //@synthesize matchPattern=_matchPattern - In the implementation block
+(id)urlRequestRewriteRuleWithMatchPattern:(id)arg1 block:(/*^block*/id)arg2 ;
-(void)setPriority:(float)arg1 ;
-(void)setName:(NSString *)arg1 ;
-(NSString *)name;
-(float)priority;
-(id)initWithMatchExpression:(id)arg1 block:(/*^block*/id)arg2 ;
-(void)rewriteURLRequest:(id)arg1 ;
-(NSRegularExpression *)matchPattern;
@end

