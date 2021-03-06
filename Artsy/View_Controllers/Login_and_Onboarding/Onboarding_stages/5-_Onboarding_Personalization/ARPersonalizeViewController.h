#import "AROnboardingViewController.h"

@class AROnboardingPersonalizeTableViewController;


@interface ARPersonalizeViewController : UIViewController

- (instancetype)initForStage:(AROnboardingStage)stage;
@property (nonatomic, weak) id<AROnboardingStepsDelegate> delegate;

@property (nonatomic, assign, readonly) AROnboardingStage state;

@property (nonatomic, assign, readonly) NSInteger followedThisSession;
@property (nonatomic, strong, readonly) AROnboardingPersonalizeTableViewController *searchResultsTable;


@end
