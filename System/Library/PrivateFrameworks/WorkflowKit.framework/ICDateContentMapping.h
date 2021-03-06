/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:59:51 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/WorkflowKit.framework/WorkflowKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <WorkflowKit/ICContentMapping.h>

@class NSDateFormatter;

@interface ICDateContentMapping : ICContentMapping {

	NSDateFormatter* _dateFormatter;

}

@property (nonatomic,retain) NSDateFormatter * dateFormatter;              //@synthesize dateFormatter=_dateFormatter - In the implementation block
-(NSDateFormatter *)dateFormatter;
-(void)setDateFormatter:(NSDateFormatter *)arg1 ;
-(void)getStringRepresentation:(/*^block*/id)arg1 withInput:(id)arg2 parameters:(id)arg3 ;
-(id)initWithDefinition:(id)arg1 ;
@end

