/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:54:20 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/CoreSuggestions.framework/CoreSuggestions
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CoreSuggestions/CoreSuggestions-Structs.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSArray;

@interface SGSuggestions : NSObject <NSSecureCoding> {

	NSArray* _contacts;
	NSArray* _events;
	NSArray* _reminders;

}

@property (nonatomic,readonly) NSArray * contacts;               //@synthesize contacts=_contacts - In the implementation block
@property (nonatomic,readonly) NSArray * events;                 //@synthesize events=_events - In the implementation block
@property (nonatomic,readonly) NSArray * reminders;              //@synthesize reminders=_reminders - In the implementation block
+(BOOL)supportsSecureCoding;
-(NSArray *)contacts;
-(NSArray *)events;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(id)description;
-(id)initWithContacts:(id)arg1 events:(id)arg2 reminders:(id)arg3 ;
-(NSArray *)reminders;
-(void)encodeWithCoder:(id)arg1 ;
@end
