/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:59:48 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/NotesUI.framework/NotesUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <ShareSheet/UIActivity.h>

@class NSArray, UIViewController, UIBarButtonItem;

@interface ICExportNotesActivity : UIActivity {

	NSArray* _noteObjectIDs;
	UIViewController* _viewController;
	UIBarButtonItem* _barButtonItem;

}

@property (nonatomic,retain) NSArray * noteObjectIDs;                        //@synthesize noteObjectIDs=_noteObjectIDs - In the implementation block
@property (nonatomic,retain) UIViewController * viewController;              //@synthesize viewController=_viewController - In the implementation block
@property (nonatomic,retain) UIBarButtonItem * barButtonItem;                //@synthesize barButtonItem=_barButtonItem - In the implementation block
-(void)setViewController:(UIViewController *)arg1 ;
-(UIBarButtonItem *)barButtonItem;
-(id)activityType;
-(id)activityImage;
-(BOOL)canPerformWithActivityItems:(id)arg1 ;
-(id)activityTitle;
-(void)setBarButtonItem:(UIBarButtonItem *)arg1 ;
-(void)performActivity;
-(UIViewController *)viewController;
-(NSArray *)noteObjectIDs;
-(id)initWithNotes:(id)arg1 forPresentingFromViewController:(id)arg2 barButtonItem:(id)arg3 ;
-(void)setNoteObjectIDs:(NSArray *)arg1 ;
@end
