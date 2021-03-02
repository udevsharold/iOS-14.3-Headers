/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:59:36 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/ActionPredictionHeuristicsInternal.framework/ActionPredictionHeuristicsInternal
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSString, ATXActionCriteria;

@interface ATXHeuristicActionMaker : NSObject <NSSecureCoding> {

	NSString* _title;
	NSString* _subtitle;
	ATXActionCriteria* _criteria;
	NSString* _heuristic;

}

@property (nonatomic,readonly) NSString * actionTypeName; 
@property (nonatomic,retain) ATXActionCriteria * criteria;              //@synthesize criteria=_criteria - In the implementation block
@property (nonatomic,retain) NSString * heuristic;                      //@synthesize heuristic=_heuristic - In the implementation block
@property (nonatomic,retain) NSString * title;                          //@synthesize title=_title - In the implementation block
@property (nonatomic,retain) NSString * subtitle;                       //@synthesize subtitle=_subtitle - In the implementation block
+(BOOL)supportsSecureCoding;
-(ATXActionCriteria *)criteria;
-(void)setHeuristic:(NSString *)arg1 ;
-(NSString *)subtitle;
-(NSString *)heuristic;
-(id)initWithCoder:(id)arg1 ;
-(void)setSubtitle:(NSString *)arg1 ;
-(void)setTitle:(NSString *)arg1 ;
-(id)action;
-(void)setCriteria:(ATXActionCriteria *)arg1 ;
-(NSString *)title;
-(void)encodeWithCoder:(id)arg1 ;
-(id)_makeAction;
-(NSString *)actionTypeName;
@end
