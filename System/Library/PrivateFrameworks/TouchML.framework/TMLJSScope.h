/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 11:09:05 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/TouchML.framework/TouchML
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSMutableSet;

@interface TMLJSScope : NSObject {

	int _type;
	NSMutableSet* _vars;

}

@property (assign,nonatomic) int type;                         //@synthesize type=_type - In the implementation block
@property (nonatomic,retain) NSMutableSet * vars;              //@synthesize vars=_vars - In the implementation block
-(NSMutableSet *)vars;
-(void)setType:(int)arg1 ;
-(int)type;
-(void)addVar:(id)arg1 ;
-(void)setVars:(NSMutableSet *)arg1 ;
@end

