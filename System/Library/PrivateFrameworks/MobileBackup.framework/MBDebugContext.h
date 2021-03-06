/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:54:39 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/MobileBackup.framework/MobileBackup
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSMutableDictionary, NSDate;

@interface MBDebugContext : NSObject {

	NSMutableDictionary* _dictionary;

}

@property (nonatomic,readonly) long long time; 
@property (nonatomic,retain) NSDate * simulatedDate; 
+(id)defaultDebugContext;
-(id)init;
-(long long)time;
-(BOOL)eval:(id)arg1 ;
-(void)dealloc;
-(BOOL)isFlagSet:(id)arg1 ;
-(int)intForName:(id)arg1 ;
-(id)description;
-(BOOL)boolForName:(id)arg1 ;
-(NSDate *)simulatedDate;
-(id)valueForName:(id)arg1 ;
-(void)setValue:(id)arg1 forName:(id)arg2 ;
-(void)removeValueForName:(id)arg1 ;
-(void)setSimulatedDate:(NSDate *)arg1 ;
-(void)setBool:(BOOL)arg1 forName:(id)arg2 ;
-(void)setInt:(int)arg1 forName:(id)arg2 ;
-(void)setDelegate:(id)arg1 andSelector:(SEL)arg2 forName:(id)arg3 ;
-(id)performSelectorForName:(id)arg1 ;
-(id)performSelectorForName:(id)arg1 withObject:(id)arg2 ;
-(void)setFlag:(id)arg1 ;
@end

